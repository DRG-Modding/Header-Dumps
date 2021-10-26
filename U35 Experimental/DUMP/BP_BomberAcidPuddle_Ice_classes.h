// BlueprintGeneratedClass BP_BomberAcidPuddle_Ice.BP_BomberAcidPuddle_Ice_C
// Size: 0x258 (Inherited: 0x248)
struct ABP_BomberAcidPuddle_Ice_C : AAdicPuddle {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* ParticleSystem; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_BomberAcidPuddle_Ice(int32_t EntryPoint);
};

