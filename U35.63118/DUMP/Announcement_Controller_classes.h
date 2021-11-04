// WidgetBlueprintGeneratedClass Announcement_Controller.Announcement_Controller_C
// Size: 0x26c (Inherited: 0x230)
struct UAnnouncement_Controller_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* ResourceFull; // 0x238(0x08)
	UTextBlock* ResourceFullLabel; // 0x240(0x08)
	UCanvasPanel* RootPanel; // 0x248(0x08)
	UObject* GoldFrenzyComponent; // 0x250(0x08)
	APlayerCharacter* Character; // 0x258(0x08)
	UPlayerHealthComponent* HealthComponent; // 0x260(0x08)
	float NextAnnouncementTime; // 0x268(0x04)

	void CreateEverythingCollectedAnnouncement(FText Message);
	void CreateVanityAnnouncement(UVanityItem* VanityItem, UPlayerCharacterID* VanityOwner);
	void CreatePickaxeAnnouncement(UPickaxePart* PickaxePart);
	void CreateSchematicAnnouncement(USchematic* InSchematic);
	void CreateVPAnnouncement(UVictoryPose* VictoryPose, UPlayerCharacterID* VPOwner);
	void QueueWidget(UUserWidget* InWidget);
	float GetStartDelay();
	void CreateSkinAnnouncement(UItemSkin* Skin, UItemID* SkinOwner);
	void CreateValueAnnouncement(float Value, FText Name, FLinearColor Color, int32_t FractionalDigits, UTexture2D* Icon, FLinearColor Icon Tint);
	void CreateTextAnnouncement(FText Text, FLinearColor Color, UTexture2D* Icon, FLinearColor Icon Tint);
	void Construct();
	void OnHealed(float Amount);
	void OnResourceFull(UCappedResource* Resource);
	void OnResourceIncreased(UCappedResource* Resource, float Amount);
	void Do Resource Full(FText Name);
	void OnFullHealthCannotHeal();
	void OnResourceFullStarted();
	void OnResourceFullFinished();
	void OnCollectedSkin(UItemSkin* Skin, UItemID* ItemID);
	void OnCollectedVictoryPose_Event_1(UVictoryPose* pose, UPlayerCharacterID* characterID);
	void OnCollectedSchematic_Event(USchematic* Schematic);
	void OnCollectedPickaxePart_Event_1(UPickaxePart* PickaxePart);
	void OnCollectedVanityItem_Event_1(UVanityItem* Item, UPlayerCharacterID* characterID);
	void OnCollectedEverything_Event(FText InMessage);
	void ExecuteUbergraph_Announcement_Controller(int32_t EntryPoint);
};

