#include "ACEAB.h"
#include "A/ACEABA.h"
#include "B/ACEABB.h"
#include "C/ACEABC.h"
#include "D/ACEABD.h"
#include "E/ACEABE.h"

namespace ACEAB {

std::string run() {
  std::string out("ACEAB");
  out += std::string(SEPARATOR);
  out += ACEABA::run();
  out += std::string(SEPARATOR);
  out += ACEABB::run();
  out += std::string(SEPARATOR);
  out += ACEABC::run();
  out += std::string(SEPARATOR);
  out += ACEABD::run();
  out += std::string(SEPARATOR);
  out += ACEABE::run();
  return out;
}

}