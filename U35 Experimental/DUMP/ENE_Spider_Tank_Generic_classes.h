// BlueprintGeneratedClass ENE_Spider_Tank_Generic.ENE_Spider_Tank_Generic_C
// Size: 0x558 (Inherited: 0x53c)
struct AENE_Spider_Tank_Generic_C : AENE_Spider_Tank_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UMeleeAttackComponent* BiteAttack; 
	UPROPERTY(BlueprintReadWrite) UMeleeAttackComponent* StabAttack; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void MakeElite();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Spider_Tank_Generic(int32_t EntryPoint);
};

