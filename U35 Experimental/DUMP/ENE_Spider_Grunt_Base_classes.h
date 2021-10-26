// BlueprintGeneratedClass ENE_Spider_Grunt_Base.ENE_Spider_Grunt_Base_C
// Size: 0x4c8 (Inherited: 0x4b4)
struct AENE_Spider_Grunt_Base_C : AENE_SpiderBase_Large_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere; 

	UFUNCTION(BlueprintCallable) bool GetIsTargetable();
	UFUNCTION(BlueprintCallable) void OnRagdoll();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Spider_Grunt_Base(int32_t EntryPoint);
};

