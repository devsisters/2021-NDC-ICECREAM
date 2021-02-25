#include "AAADB.h"
#include "A/AAADBA.h"
#include "B/AAADBB.h"
#include "C/AAADBC.h"
#include "D/AAADBD.h"
#include "E/AAADBE.h"

namespace AAADB {

std::string run() {
  std::string out("AAADB");
  out += std::string(SEPARATOR);
  out += AAADBA::run();
  out += std::string(SEPARATOR);
  out += AAADBB::run();
  out += std::string(SEPARATOR);
  out += AAADBC::run();
  out += std::string(SEPARATOR);
  out += AAADBD::run();
  out += std::string(SEPARATOR);
  out += AAADBE::run();
  return out;
}

}