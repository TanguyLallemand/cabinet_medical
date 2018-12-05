#ifndef DEF_MAIN_FUNCTIONS_HPP
#define DEF_MAIN_FUNCTIONS_HPP

#include "person.hpp"
#include "patient.hpp"
#include "doctor.hpp"
#include "meeting.hpp"
#include "prescription.hpp"
#include "global.hpp"
#include "date.hpp"
#include "json_gestion.hpp"


void save_and_quit(vector<patient> & patient_list, vector<doctor> & doctor_list, vector<meeting> & meeting_list);

#endif
