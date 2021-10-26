// BlueprintGeneratedClass RandomWorldTransformV5.RandomWorldTransformV5_C
// Size: 0x28 (Inherited: 0x28)
struct URandomWorldTransformV5_C : UBlueprintFunctionLibrary {

	UFUNCTION(BlueprintCallable) void Is Near Avoid Locations(FVector Point, TArray<FVector> Avoid, float Radius, UObject* __WorldContext, bool Is Near);
	UFUNCTION(BlueprintCallable) void Get Terrain Trace Points(FVector Terrain Centre, float Terrain Radius, UObject* __WorldContext, FVector Start, FVector End);
	UFUNCTION(BlueprintCallable) void Get Random World Transform V5(FVector Start Location, float Target Min Distance, float Target Max Distance, float Min Slope Degrees, float Max Slope Degrees, TArray<FVector> Avoid Locations, float Avoid Distance, bool Search Only Terrain, bool Sphere Check, bool Return Sphere Check Centre, TArray<enum class EObjectTypeQuery> Sphere Check Object Types, float Sphere Check Radius, int32_t Max Search Iterations, int32_t Extra Search Attempts, float Extra Search Step Size, enum class ExtraSearchDirection Extra Search Direction, UObject* __WorldContext, FVector Location, FVector Normal, FRotator Rotation);
};

