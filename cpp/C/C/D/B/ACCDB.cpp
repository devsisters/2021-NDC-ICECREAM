#include "ACCDB.h"
#include "A/ACCDBA.h"
#include "B/ACCDBB.h"
#include "C/ACCDBC.h"
#include "D/ACCDBD.h"
#include "E/ACCDBE.h"

namespace ACCDB {

std::string run() {
  std::string out("ACCDB");
  out += std::string(SEPARATOR);
  out += ACCDBA::run();
  out += std::string(SEPARATOR);
  out += ACCDBB::run();
  out += std::string(SEPARATOR);
  out += ACCDBC::run();
  out += std::string(SEPARATOR);
  out += ACCDBD::run();
  out += std::string(SEPARATOR);
  out += ACCDBE::run();
  return out;
}

}