#pragma once

#include <UECS/World.h>

namespace Ubpa::DustEngine {
	struct RoamerSystem {
		static constexpr char SystemFuncName[] = "RoamerSystem";

		static void OnUpdate(UECS::Schedule& schedule);
	};
}
