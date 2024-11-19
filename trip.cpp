#include "trip.h"

Trip::Trip::Trip(uint32_t id, struct TripDestination tripDestination, uint32_t taxiId, Status status)
	: id(id), tripDestination(tripDestination), taxiId(taxiId), status(status) {}
