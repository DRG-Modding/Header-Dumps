// BlueprintGeneratedClass Mod040.Mod040_C
// Size: 0x2e8 (Inherited: 0x2b0)
struct AMod040_C : AModBaseV2_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) APlayerController* Local Controller; 
	UPROPERTY(BlueprintReadWrite) ULetThereBeLightUI_C* LetThereBeLightUI; 
	UPROPERTY(BlueprintReadWrite) bool Is Light On; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate On Input Changed; 
	UPROPERTY(BlueprintReadWrite) ULevelStreamingDynamic* Map; 

	UFUNCTION(BlueprintCallable) void Spawn Map();
	UFUNCTION(BlueprintCallable) void InpActEvt_L_K2Node_InputKeyEvent_1(FKey Key);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void MissionLoads(APlayerController* LocalPlayer);
	UFUNCTION(BlueprintCallable) void On Checkbox Changed(bool Is Checked);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_Mod040(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void On Input Changed__DelegateSignature(bool Is Checked);
};

