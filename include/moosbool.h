/************************************************************/
/*    NAME:                                               */
/*    ORGN: Project Ladon                                     */
/*    FILE: moosbool.hpp                                   */
/*    DATE: December 29th, 1963                             */
/************************************************************/

#include <string>
#include <vector>
#include "MOOS/libMOOS/Comms/MOOSMsg.h"

#ifndef MOOSBOOL_H
#define MOOSBOOL_H

class moosbool {
    public:
        static moosbool *instance() {
            static moosbool* mybool = nullptr;
            if (!mybool) mybool = new moosbool();
            return mybool;
        };

        bool isTrue(CMOOSMsg &msg) {
            if (msg.IsString()) return isTrue(msg.GetString());
            if (msg.IsDouble()) return isTrue(msg.GetDouble());
            if (msg.IsBinary()) return isTrue(msg.GetBinaryData());
        }

        bool isTrue(const double &val) {return isTrue(val, threshold);};
        bool isTrue(const std::string &val) {return isTrue(val, truth);};

        bool isTrue(const unsigned char* val) {
                if (val && val[0]) return true;
                return false;
        };

        bool isTrue(const std::vector<unsigned char*> &val) {
            if ((val.size() > 0) && val[0]) return true;
            return false;
        }

        bool isTrue(const double &val, const double &thresh) { return (val > thresh);};

        bool isTrue(const std::string &val, const std::vector<std::string> &thresh) {
            for (auto &t: thresh) if (t == val) return true;
            return false;
        };

        void setThreshold(const double &t) {val = t};
        void setTruthVals(const std::vector<std::string> &t) {truth = t};
    private:
        moosbool() {};
        ~moosbool() {};
        threshold = 0.5;
        std::vector<std::string> truth {"on", "On", "ON", "t", "T", "true", "True", "TRUE"};


};

#endif
