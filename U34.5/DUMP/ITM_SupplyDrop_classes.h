// BlueprintGeneratedClass ITM_SupplyDrop.ITM_SupplyDrop_C
// Size: 0x3e0 (Inherited: 0x3c8)
struct AITM_SupplyDrop_C : ARessuplyPodItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	AItemMarker* Marker; // 0x3d0(0x08)
	UOnScreenIndicator_SupplyDrop_Order_C* Widget; // 0x3d8(0x08)

	void RecieveCycledItem();
	void RecieveEquipped();
	void OnMarkerSpawned_Event(AItemMarker* Marker);
	void Update Widget();
	void ReceiveItemPlacerSpawned(UItemPlacerAggregator* InItemPlacer);
	void ExecuteUbergraph_ITM_SupplyDrop(int32_t EntryPoint);
};

