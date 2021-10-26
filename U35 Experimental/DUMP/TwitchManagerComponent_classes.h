// BlueprintGeneratedClass TwitchManagerComponent.TwitchManagerComponent_C
// Size: 0x124 (Inherited: 0xb0)
struct UTwitchManagerComponent_C : UActorComponent {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FString Save Location; 
	UPROPERTY(BlueprintReadWrite) UInteractivityQueueSave_C* Queue Save Class; 
	UPROPERTY(BlueprintReadWrite) USaveGame* Queue Save Game; 
	UPROPERTY(BlueprintReadWrite) FTimerHandle Queue Timer; 
	UPROPERTY(BlueprintReadWrite) bool Queue Allowed in SpaceRig; 
	UPROPERTY(BlueprintReadWrite) int32_t Queue Auto Pause Player Count; 
	UPROPERTY(BlueprintReadWrite) float Nameplate Rendering Interval; 
	UPROPERTY(BlueprintReadWrite) FTimerHandle Nameplate Rendering Timer; 
	UPROPERTY(BlueprintReadWrite) AActor* Nameplate View Target; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate On Viewer Redeem; 
	UPROPERTY(BlueprintReadWrite) float Nameplate Max Render Distance; 
	UPROPERTY(BlueprintReadWrite) FLinearColor Default Color; 

	UFUNCTION(BlueprintCallable) void Set Nameplate Rendering Enabled(UNameplateComponent_C* Nameplate, bool Enabled);
	UFUNCTION(BlueprintCallable) bool Is In Rendering Range(UNameplateComponent_C* Nameplate);
	UFUNCTION(BlueprintCallable) bool Can Process Queue();
	UFUNCTION(BlueprintCallable) bool Is Auto Pause Queue Active();
	UFUNCTION(BlueprintCallable) void Stop Queue();
	UFUNCTION(BlueprintCallable) void Start Queue(bool Queue Allowed in SpaceRig, int32_t Auto Pause Player Count, float Interval, float Start Delay);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void Queue Started Event(float Interval, float Start Delay);
	UFUNCTION(BlueprintCallable) void Begin Next Queue Event();
	UFUNCTION(BlueprintCallable) void Begin Nameplate Scan Event();
	UFUNCTION(BlueprintCallable) void Nameplate Rendering Started Event();
	UFUNCTION(BlueprintCallable) void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_TwitchManagerComponent(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void On Viewer Redeem__DelegateSignature(FString Profile, FString Viewer Name, FString Optional Message);
};

