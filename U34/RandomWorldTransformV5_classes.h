// BlueprintGeneratedClass RandomWorldTransformV5.RandomWorldTransformV5_C
// Size: 0x28 (Inherited: 0x28)
struct URandomWorldTransformV5_C : UBlueprintFunctionLibrary {

	void Is Near Avoid Locations(struct FVector Point, struct TArray<struct FVector> Avoid, float Radius, struct UObject* __WorldContext, bool Is Near); // Function RandomWorldTransformV5.RandomWorldTransformV5_C.Is Near Avoid Locations
	void Get Terrain Trace Points(struct FVector Terrain Centre, float Terrain Radius, struct UObject* __WorldContext, struct FVector Start, struct FVector End); // Function RandomWorldTransformV5.RandomWorldTransformV5_C.Get Terrain Trace Points
	void Get Random World Transform V5(struct FVector Start Location, float Target Min Distance, float Target Max Distance, float Min Slope Degrees, float Max Slope Degrees, struct TArray<struct FVector> Avoid Locations, float Avoid Distance, bool Search Only Terrain, bool Sphere Check, bool Return Sphere Check Centre, struct TArray<char> Sphere Check Object Types, float Sphere Check Radius, int32_t Max Search Iterations, int32_t Extra Search Attempts, float Extra Search Step Size, char Extra Search Direction, struct UObject* __WorldContext, struct FVector Location, struct FVector Normal, struct FRotator Rotation); // Function RandomWorldTransformV5.RandomWorldTransformV5_C.Get Random World Transform V5
};

