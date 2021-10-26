// BlueprintGeneratedClass RandomGroundLocationV2.RandomGroundLocationV2_C
// Size: 0x28 (Inherited: 0x28)
struct URandomGroundLocationV2_C : UBlueprintFunctionLibrary {

	UFUNCTION(BlueprintCallable) void Check Avoid Locations(TArray<FVector> Avoid Locations, float Distance, FVector Target Location, UObject* __WorldContext, bool Overlap);
	UFUNCTION(BlueprintCallable) void Get Location(int32_t Max Search Iterations, bool Terrain Only Mode, TArray<AActor*> Ignore Actors, float Min Ceiling Height, float Sphere Check Radius, float Sphere Check Ground Offset, float Max Ground Slope Degrees, TArray<FVector> Avoid Locations, float Avoid Location Radius, UObject* __WorldContext, FVector Location, bool success);
};

