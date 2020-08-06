// This file is generated by Ubpa::USRefl::AutoRefl

#pragma once

#include <USRefl/USRefl.h>

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::DustEngine::LuaSystem>
	: Ubpa::USRefl::TypeInfoBase<Ubpa::DustEngine::LuaSystem, Base<UECS::System>>
{
	static constexpr AttrList attrs = {};

	static constexpr FieldList fields = {
		Field{"Register", &Ubpa::DustEngine::LuaSystem::Register,
			AttrList {
				Attr{UBPA_USREFL_NAME_ARG(0),
					AttrList{
						Attr{Name::name, "world"},
					}
				},
				Attr{UBPA_USREFL_NAME_ARG(1),
					AttrList{
						Attr{Name::name, "name"},
					}
				},
				Attr{UBPA_USREFL_NAME_ARG(2),
					AttrList{
						Attr{Name::name, "onUpdate"},
					}
				},
			}
		},
		Field{"RegisterSystemFunc_Entity", &Ubpa::DustEngine::LuaSystem::RegisterSystemFunc_Entity,
			AttrList {
				Attr{UBPA_USREFL_NAME_ARG(0)},
				Attr{UBPA_USREFL_NAME_ARG(1),
					AttrList{
						Attr{Name::name, "systemFunc"},
					}
				},
				Attr{UBPA_USREFL_NAME_ARG(2),
					AttrList{
						Attr{Name::name, "name"},
					}
				},
				Attr{UBPA_USREFL_NAME_ARG(3),
					AttrList{
						Attr{Name::name, "EntityLocator"},
					}
				},
				Attr{UBPA_USREFL_NAME_ARG(4),
					AttrList{
						Attr{Name::name, "EntityFilter"},
					}
				},
			}
		},
		Field{"RegisterSystemFunc_Chunk", &Ubpa::DustEngine::LuaSystem::RegisterSystemFunc_Chunk,
			AttrList {
				Attr{UBPA_USREFL_NAME_ARG(0)},
				Attr{UBPA_USREFL_NAME_ARG(1),
					AttrList{
						Attr{Name::name, "systemFunc"},
					}
				},
				Attr{UBPA_USREFL_NAME_ARG(2),
					AttrList{
						Attr{Name::name, "name"},
					}
				},
				Attr{UBPA_USREFL_NAME_ARG(3),
					AttrList{
						Attr{Name::name, "EntityFilter"},
					}
				},
			}
		},
		Field{"RegisterSystemFunc_Job", &Ubpa::DustEngine::LuaSystem::RegisterSystemFunc_Job,
			AttrList {
				Attr{UBPA_USREFL_NAME_ARG(0)},
				Attr{UBPA_USREFL_NAME_ARG(1),
					AttrList{
						Attr{Name::name, "systemFunc"},
					}
				},
				Attr{UBPA_USREFL_NAME_ARG(2),
					AttrList{
						Attr{Name::name, "name"},
					}
				},
			}
		},
	};
};