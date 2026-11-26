
#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(SmartClickMenuLayer, MenuLayer) {
    bool init() {
        if (!MenuLayer::init())
            return false;

        log::info("SmartClick Future Funk loaded!");

        return true;
    }
};
