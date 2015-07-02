#ifndef GLOBALCONTEXT
#define GLOBALCONTEXT

#include <QString>

static const unsigned int DATA_SIZE = 191;

//Column index in model
static const unsigned int GROUPS_INDEX = 0;
static const unsigned int NAME_INDEX = 1;
static const unsigned int VALUE_INDEX = 2;
static const unsigned int VALUE_NEW_INDEX = 3;
static const unsigned int TYPE_INDEX = 4;
static const unsigned int NOTE_INDEX = 5;

//Column index in conf_sat.txt
static const unsigned int GROUPS_FILE_INDEX = 0;
static const unsigned int NAME_FILE_INDEX = 1;
static const unsigned int TYPE_FILE_INDEX = 2;
static const unsigned int TYPE_UNIT_FILE_INDEX = 3;
static const unsigned int VALUE_FILE_INDEX = 4;
static const unsigned int NOTE_FILE_INDEX = 5;

//Starting position of each column in conf_sat.txt
static const unsigned int group_start_index = 0;
static const unsigned int param_name_start_index = 21;
static const unsigned int type_start_index = 62;
static const unsigned int type_unit_start_index = 79;
static const unsigned int param_value_start_index = 90;
static const unsigned int note_start_index = 111;

static const QString SAT_CONFIG_PATH = "conf_sat.txt";

static const QString SCC_STR = "SCC";
static const QString MPC_PL_STR = "MPC_PL";
static const QString MPC_AOCS_STR = "MPC_AOCS";
static const QString FDS_STR = "FDS";

#endif // GLOBALCONTEXT

