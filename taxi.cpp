#include "taxi.h"

Taxi::Taxi::Taxi(uint32_t id, struct CurrentLocation currentLocation, Status status)
	: id(id), currentLocation(currentLocation), status(status) {}
