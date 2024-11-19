#include <cstdint>

namespace Trip {
    struct Location {
        int x;
        int y;
    };

    enum class Status {
        inProgress,
        Completed
    };

    struct TripDestination {
        Location start;
        Location end;
    };


    class Trip {
    private:
        uint32_t id;
	    struct TripDestination tripDestination;
	    uint32_t taxiId;
	    Status status;

    public:
	    Trip(uint32_t id, struct TripDestination tripDestination, uint32_t taxiId, Status status);
    };
}
