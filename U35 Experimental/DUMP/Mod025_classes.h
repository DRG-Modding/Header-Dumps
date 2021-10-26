// BlueprintGeneratedClass Mod025.Mod025_C
// Size: 0x398 (Inherited: 0x2b0)
struct AMod025_C : AModBaseV2_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) bool Active; 
	UPROPERTY(BlueprintReadWrite) bool Is Down; 
	UPROPERTY(BlueprintReadWrite) int32_t Target Player Index; 
	UPROPERTY(BlueprintReadWrite) A025_SpectatorCam_C* Current Cam; 
	UPROPERTY(BlueprintReadWrite) TMap<AActor*, A025_SpectatorCam_C*> Cams; 
	UPROPERTY(BlueprintReadWrite) float Mouse Zoom Control; 
	UPROPERTY(BlueprintReadWrite) bool Transitioning; 
	UPROPERTY(BlueprintReadWrite) FString Save File Path; 
	UPROPERTY(BlueprintReadWrite) U025_SaveData_C* Save Data; 
	UPROPERTY(BlueprintReadWrite) TMap<AActor*, float> All Actors To Track; 
	UPROPERTY(BlueprintReadWrite) FTimerHandle Death Check Timer; 
	UPROPERTY(BlueprintReadWrite) APlayerController* Local Controller; 

	UFUNCTION(BlueprintCallable) void Get Cam Offset Transform(float Offset, FTransform Transform);
	UFUNCTION(BlueprintCallable) void Get Friendly BETCs(TArray<AActor*> Actors);
	UFUNCTION(BlueprintCallable) void Get Actors to Track(TMap<AActor*, float> Actors);
	UFUNCTION(BlueprintCallable) void Load Save Data();
	UFUNCTION(BlueprintCallable) void Is Player Down(bool Is Down);
	UFUNCTION(BlueprintCallable) void Switch Player Spectator Cam(int32_t New Target Player Index, bool Override Transition Time, float Transition Time Override, A025_SpectatorCam_C* Cam);
	UFUNCTION(BlueprintCallable) void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_12(FKey Key);
	UFUNCTION(BlueprintCallable) void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_11(FKey Key);
	UFUNCTION(BlueprintCallable) void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_10(FKey Key);
	UFUNCTION(BlueprintCallable) void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_9(FKey Key);
	UFUNCTION(BlueprintCallable) void InpActEvt_Down_K2Node_InputKeyEvent_8(FKey Key);
	UFUNCTION(BlueprintCallable) void InpActEvt_Down_K2Node_InputKeyEvent_7(FKey Key);
	UFUNCTION(BlueprintCallable) void InpActEvt_Up_K2Node_InputKeyEvent_6(FKey Key);
	UFUNCTION(BlueprintCallable) void InpActEvt_Up_K2Node_InputKeyEvent_5(FKey Key);
	UFUNCTION(BlueprintCallable) void InpActEvt_One_K2Node_InputKeyEvent_4(FKey Key);
	UFUNCTION(BlueprintCallable) void InpActEvt_One_K2Node_InputKeyEvent_3(FKey Key);
	UFUNCTION(BlueprintCallable) void InpActEvt_Two_K2Node_InputKeyEvent_2(FKey Key);
	UFUNCTION(BlueprintCallable) void InpActEvt_Two_K2Node_InputKeyEvent_1(FKey Key);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void Initialise(APlayerController* LocalPlayer);
	UFUNCTION(BlueprintCallable) void Main Loop();
	UFUNCTION(BlueprintCallable) void Check If Player Is Down();
	UFUNCTION(BlueprintCallable) void ReceiveTick(float DeltaSeconds);
	UFUNCTION(BlueprintCallable) void Transition Done();
	UFUNCTION(BlueprintCallable) void Save();
	UFUNCTION(BlueprintCallable) void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	UFUNCTION(BlueprintCallable) void ReceiveDestroyed();
	UFUNCTION(BlueprintCallable) void Start();
	UFUNCTION(BlueprintCallable) void Stop();
	UFUNCTION(BlueprintCallable) void Enable Input After Death();
	UFUNCTION(BlueprintCallable) void ResetCams();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_Mod025(int32_t EntryPoint);
};

