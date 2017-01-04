#include "Rasterizer.h"


Rasterizer::Rasterizer()
    : Renderer() {
    
}

Rasterizer::Rasterizer(World* world)
    : Renderer(world) {
    
}

Rasterizer::~Rasterizer(){
    
}

void Rasterizer::render(const uint16_t image_width, const uint16_t image_height, const std::string output_path) const {
    //TODO: ender to m_pixels
    
    exportImage(image_width, image_height, output_path);
};