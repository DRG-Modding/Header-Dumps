// BlueprintGeneratedClass ENE_Spider_Tank_Normal2.ENE_Spider_Tank_Normal2_C
// Size: 0x570 (Inherited: 0x558)
struct AENE_Spider_Tank_Normal2_C : AENE_Spider_Tank_Generic_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* ConeCapsule; 
	UPROPERTY(BlueprintReadWrite) UBP_ConeAttackBase_C* ConeAttack; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Spider_Tank_Normal2(int32_t EntryPoint);
};

