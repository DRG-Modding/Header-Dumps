// BlueprintGeneratedClass ENE_Jelly_Passive_Mother.ENE_Jelly_Passive_Mother_C
// Size: 0x3c8 (Inherited: 0x3b0)
struct AENE_Jelly_Passive_Mother_C : AENE_Jelly_Passive_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* ParticleSystem; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* Box1; 

	UFUNCTION(BlueprintCallable) void OnDeath();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Jelly_Passive_Mother(int32_t EntryPoint);
};

