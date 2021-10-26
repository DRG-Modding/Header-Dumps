// BlueprintGeneratedClass EVENT_DropPodDefense_Uplink.EVENT_DropPodDefense_Uplink_C
// Size: 0x458 (Inherited: 0x450)
struct AEVENT_DropPodDefense_Uplink_C : AEVENT_DropPodDefense_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 

	UFUNCTION(BlueprintCallable) void EventSucceded();
	UFUNCTION(BlueprintCallable) void EventFailed();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_EVENT_DropPodDefense_Uplink(int32_t EntryPoint);
};

