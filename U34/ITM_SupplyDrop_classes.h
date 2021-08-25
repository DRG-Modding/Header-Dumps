// BlueprintGeneratedClass ITM_SupplyDrop.ITM_SupplyDrop_C
// Size: 0x3e0 (Inherited: 0x3c8)
struct AITM_SupplyDrop_C : ARessuplyPodItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct AItemMarker* Marker; // 0x3d0(0x08)
	struct UOnScreenIndicator_SupplyDrop_Order_C* Widget; // 0x3d8(0x08)

	void RecieveCycledItem(); // Function ITM_SupplyDrop.ITM_SupplyDrop_C.RecieveCycledItem
	void RecieveEquipped(); // Function ITM_SupplyDrop.ITM_SupplyDrop_C.RecieveEquipped
	void OnMarkerSpawned_Event(struct AItemMarker* Marker); // Function ITM_SupplyDrop.ITM_SupplyDrop_C.OnMarkerSpawned_Event
	void Update Widget(); // Function ITM_SupplyDrop.ITM_SupplyDrop_C.Update Widget
	void ReceiveItemPlacerSpawned(struct UItemPlacerAggregator* InItemPlacer); // Function ITM_SupplyDrop.ITM_SupplyDrop_C.ReceiveItemPlacerSpawned
	void ExecuteUbergraph_ITM_SupplyDrop(int32_t EntryPoint); // Function ITM_SupplyDrop.ITM_SupplyDrop_C.ExecuteUbergraph_ITM_SupplyDrop
};

