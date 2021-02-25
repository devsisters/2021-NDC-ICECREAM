#include "ABDB.h"
#include "A/ABDBA.h"
#include "B/ABDBB.h"
#include "C/ABDBC.h"
#include "D/ABDBD.h"
#include "E/ABDBE.h"

namespace ABDB {

std::string run() {
  std::string out("ABDB");
  out += std::string(SEPARATOR);
  out += ABDBA::run();
  out += std::string(SEPARATOR);
  out += ABDBB::run();
  out += std::string(SEPARATOR);
  out += ABDBC::run();
  out += std::string(SEPARATOR);
  out += ABDBD::run();
  out += std::string(SEPARATOR);
  out += ABDBE::run();
  return out;
}

}