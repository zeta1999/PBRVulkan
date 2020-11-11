#pragma once

#include <glm/glm.hpp>

namespace Assets
{
	enum LightType
	{
		QuadLight,
		SphereLight
	};

	struct Light final
	{
		alignas(16) glm::vec3 position{};
		alignas(16) glm::vec3 emission{};
		alignas(16) glm::vec3 u{};
		alignas(16) glm::vec3 v{};
		glm::float32_t area{};
		glm::int32_t type{};
		glm::float32_t radius{};
	};
}
