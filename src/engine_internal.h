#ifndef PGS_EXPORT266_SRC_ENGINE_INTERNAL_H
#define PGS_EXPORT266_SRC_ENGINE_INTERNAL_H

#include <ft2build.h>
#include FT_FREETYPE_H
#include <hb.h>

#include <string>

#include "pgs_export266/pgs_export266.h"

namespace pgs_export266 {

struct Engine::Impl {
  hb_blob_t* blob = nullptr;
  hb_face_t* face = nullptr;
  hb_font_t* font = nullptr;
  FT_Library ft_library = nullptr;
  FT_Face ft_face = nullptr;
  std::string font_path;
  Error error = Error::kOk;
};

}  // namespace pgs_export266

#endif
