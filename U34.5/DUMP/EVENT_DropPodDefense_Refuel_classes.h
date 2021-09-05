// BlueprintGeneratedClass EVENT_DropPodDefense_Refuel.EVENT_DropPodDefense_Refuel_C
// Size: 0x458 (Inherited: 0x450)
struct AEVENT_DropPodDefense_Refuel_C : AEVENT_DropPodDefense_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)

	void EventSucceded();
	void EventFailed();
	void ExecuteUbergraph_EVENT_DropPodDefense_Refuel(int32_t EntryPoint);
};

