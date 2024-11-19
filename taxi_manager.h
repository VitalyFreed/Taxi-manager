#include <list>
#include <cstdint>
#include "taxi.h"
#include "trip.h"

class TaxiManager {
private:
	static TaxiManager* taxiManager;
	std::list<Taxi::Taxi> taxis;
	std::list<Trip::Trip> activeTrips;
	std::list<Trip::Trip> completedTrips;
	uint32_t nextTaxiId = 1;
	uint32_t nextTripId = 1;

	TaxiManager();
	TaxiManager(const TaxiManager&) = delete;
	TaxiManager& operator=(const TaxiManager&) = delete;

public:
	void addTaxi();
	void createTrip();
	void updateTrips();
	void printStatus();

	static TaxiManager* getInstance();
	static void destroyInstance();
};
