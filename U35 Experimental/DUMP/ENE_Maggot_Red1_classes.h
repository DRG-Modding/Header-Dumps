// BlueprintGeneratedClass ENE_Maggot_Red1.ENE_Maggot_Red1_C
// Size: 0x3c0 (Inherited: 0x3b0)
struct AENE_Maggot_Red1_C : AENE_Maggot_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UDamageComponent* Damage; 

	UFUNCTION(BlueprintCallable) void Died();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Maggot_Red1(int32_t EntryPoint);
};

