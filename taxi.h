#include <cstdint>

namespace Taxi {
    struct CurrentLocation {
	    int x;
	    int y;
    };

    enum class Status {
	    Busy,
	    Free,
    };

    class Taxi {
    private:
	    uint32_t id;
	    struct CurrentLocation currentLocation;
	    Status status;

    public:
	    Taxi(uint32_t id, struct CurrentLocation currentLocation, Status status);
    };
}
