#include "ABDDB.h"
#include "A/ABDDBA.h"
#include "B/ABDDBB.h"
#include "C/ABDDBC.h"
#include "D/ABDDBD.h"
#include "E/ABDDBE.h"

namespace ABDDB {

std::string run() {
  std::string out("ABDDB");
  out += std::string(SEPARATOR);
  out += ABDDBA::run();
  out += std::string(SEPARATOR);
  out += ABDDBB::run();
  out += std::string(SEPARATOR);
  out += ABDDBC::run();
  out += std::string(SEPARATOR);
  out += ABDDBD::run();
  out += std::string(SEPARATOR);
  out += ABDDBE::run();
  return out;
}

}