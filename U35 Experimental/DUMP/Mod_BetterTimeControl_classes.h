// BlueprintGeneratedClass Mod_BetterTimeControl.Mod_BetterTimeControl_C
// Size: 0x290 (Inherited: 0x220)
struct AMod_BetterTimeControl_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) UBetterTimeControl_HUD_C* TimeHUDRef; 
	UPROPERTY(BlueprintReadWrite) float TimeDilation; 
	UPROPERTY(BlueprintReadWrite) float MaxDilation; 
	UPROPERTY(BlueprintReadWrite) UBetterTimeControl_UI_C* TimeUIRef; 
	UPROPERTY(BlueprintReadWrite) float MinDilation; 
	UPROPERTY(BlueprintReadWrite) bool IsHUDEnabled; 
	UPROPERTY(BlueprintReadWrite) UBetterTimeControl_SaveData_C* SaveData; 
	UPROPERTY(BlueprintReadWrite) FString SaveFileName; 
	UPROPERTY(BlueprintReadWrite) TArray<APlayerController*> Players; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate BroadcastNewDilation; 
	UPROPERTY(BlueprintReadWrite) UReplicatedComponent_C* ReplicatedComponent; 

	UFUNCTION(BlueprintCallable) void Get Config(UWidget* Mod UI, bool Can Be Toggled Off, FString Mod Name, FString Mod Author, FString Mod Version);
	UFUNCTION(BlueprintCallable) void Save Save Data();
	UFUNCTION(BlueprintCallable) void Load Save Data();
	UFUNCTION(BlueprintCallable) void Use New Dilation(float Dilation);
	UFUNCTION(BlueprintCallable) void Replicating Player Controllers();
	UFUNCTION(BlueprintCallable) void Load Data Into Mod();
	UFUNCTION(BlueprintCallable) void New Dilation Chosen(float TimeVal);
	UFUNCTION(BlueprintCallable) void Check Input Action Conflict(FName ActionName, FKey KeyToCheck, bool IsConflicting);
	UFUNCTION(BlueprintCallable) void Edit Input Action Mapping(FName ActionName, FKey NewKey);
	UFUNCTION(BlueprintCallable) void Create Input Action Mapping(FName ActionName, FInputChord Default Chord);
	UFUNCTION(BlueprintCallable) void InpActEvt_IncreaseTimeControl_K2Node_InputActionEvent_2(FKey Key);
	UFUNCTION(BlueprintCallable) void InpActEvt_DecreaseTimeControl_K2Node_InputActionEvent_1(FKey Key);
	UFUNCTION(BlueprintCallable) void Handle Disable Event();
	UFUNCTION(BlueprintCallable) void Handle Enable Event();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void TimeControl_Event(float NewTimeValue);
	UFUNCTION(BlueprintCallable) void IncrementKeyChanged_Event(FKey NewKey);
	UFUNCTION(BlueprintCallable) void DecrementKeyChanged_Event(FKey NewKey);
	UFUNCTION(BlueprintCallable) void ToggleHUD_Event();
	UFUNCTION(BlueprintCallable) void ResetSlider_Event();
	UFUNCTION(BlueprintCallable) void ReceiveDestroyed();
	UFUNCTION(BlueprintCallable) void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	UFUNCTION(BlueprintCallable) void ReceiveTick(float DeltaSeconds);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_Mod_BetterTimeControl(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void BroadcastNewDilation__DelegateSignature(float Dilation);
};

