
//---------------DECLARATIONS FOR EGRESS CLASS---------------------

typedef struct Egress {
   edgepayload_t type;
   State* (*walk)(struct EdgePayload*, struct State*, struct WalkOptions*);
   State* (*walkBack)(struct EdgePayload*, struct State*, struct WalkOptions*);
    
   char* name;
   double length;
} Egress;

Egress*
egressNew(const char *name, double length);

void
egressDestroy(Egress* tokill);

inline State*
egressWalk(EdgePayload* superthis, State* state, WalkOptions* options);

inline State*
egressWalkBack(EdgePayload* superthis, State* state, WalkOptions* options);

char*
egressGetName(Egress* this);

double
egressGetLength(Egress* this);