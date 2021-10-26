// BlueprintGeneratedClass ENE_Spider_Exploding_Radioactive.ENE_Spider_Exploding_Radioactive_C
// Size: 0x500 (Inherited: 0x4ea)
struct AENE_Spider_Exploding_Radioactive_C : AENE_Spider_Exploding_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) AActor* PostExplosionCloudClass; 

	UFUNCTION(BlueprintCallable) void DamageAndCarve();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Spider_Exploding_Radioactive(int32_t EntryPoint);
};

