// BlueprintGeneratedClass ENE_Spider_ExploderTank_King.ENE_Spider_ExploderTank_King_C
// Size: 0x588 (Inherited: 0x570)
struct AENE_Spider_ExploderTank_King_C : AENE_Spider_ExploderTank_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* Light_BackBody2; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* Light_BackBody1; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Spider_ExploderTank_King(int32_t EntryPoint);
};

