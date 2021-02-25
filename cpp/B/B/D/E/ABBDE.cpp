#include "ABBDE.h"
#include "A/ABBDEA.h"
#include "B/ABBDEB.h"
#include "C/ABBDEC.h"
#include "D/ABBDED.h"
#include "E/ABBDEE.h"

namespace ABBDE {

std::string run() {
  std::string out("ABBDE");
  out += std::string(SEPARATOR);
  out += ABBDEA::run();
  out += std::string(SEPARATOR);
  out += ABBDEB::run();
  out += std::string(SEPARATOR);
  out += ABBDEC::run();
  out += std::string(SEPARATOR);
  out += ABBDED::run();
  out += std::string(SEPARATOR);
  out += ABBDEE::run();
  return out;
}

}