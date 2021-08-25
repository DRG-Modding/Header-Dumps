// WidgetBlueprintGeneratedClass Announcement_Controller.Announcement_Controller_C
// Size: 0x26c (Inherited: 0x230)
struct UAnnouncement_Controller_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* ResourceFull; // 0x238(0x08)
	struct UTextBlock* ResourceFullLabel; // 0x240(0x08)
	struct UCanvasPanel* RootPanel; // 0x248(0x08)
	struct UObject* GoldFrenzyComponent; // 0x250(0x08)
	struct APlayerCharacter* Character; // 0x258(0x08)
	struct UPlayerHealthComponent* HealthComponent; // 0x260(0x08)
	float NextAnnouncementTime; // 0x268(0x04)

	void CreateEverythingCollectedAnnouncement(struct FText Message); // Function Announcement_Controller.Announcement_Controller_C.CreateEverythingCollectedAnnouncement
	void CreateVanityAnnouncement(struct UVanityItem* VanityItem, struct UPlayerCharacterID* VanityOwner); // Function Announcement_Controller.Announcement_Controller_C.CreateVanityAnnouncement
	void CreatePickaxeAnnouncement(struct UPickaxePart* PickaxePart); // Function Announcement_Controller.Announcement_Controller_C.CreatePickaxeAnnouncement
	void CreateSchematicAnnouncement(struct USchematic* InSchematic); // Function Announcement_Controller.Announcement_Controller_C.CreateSchematicAnnouncement
	void CreateVPAnnouncement(struct UVictoryPose* VictoryPose, struct UPlayerCharacterID* VPOwner); // Function Announcement_Controller.Announcement_Controller_C.CreateVPAnnouncement
	void QueueWidget(struct UUserWidget* InWidget); // Function Announcement_Controller.Announcement_Controller_C.QueueWidget
	float GetStartDelay(); // Function Announcement_Controller.Announcement_Controller_C.GetStartDelay
	void CreateSkinAnnouncement(struct UItemSkin* Skin, struct UItemID* SkinOwner); // Function Announcement_Controller.Announcement_Controller_C.CreateSkinAnnouncement
	void CreateValueAnnouncement(float Value, struct FText Name, struct FLinearColor Color, int32_t FractionalDigits, struct UTexture2D* Icon, struct FLinearColor Icon Tint); // Function Announcement_Controller.Announcement_Controller_C.CreateValueAnnouncement
	void CreateTextAnnouncement(struct FText Text, struct FLinearColor Color, struct UTexture2D* Icon, struct FLinearColor Icon Tint); // Function Announcement_Controller.Announcement_Controller_C.CreateTextAnnouncement
	void Construct(); // Function Announcement_Controller.Announcement_Controller_C.Construct
	void OnHealed(float amount); // Function Announcement_Controller.Announcement_Controller_C.OnHealed
	void OnResourceFull(struct UCappedResource* Resource); // Function Announcement_Controller.Announcement_Controller_C.OnResourceFull
	void OnResourceIncreased(struct UCappedResource* Resource, float amount); // Function Announcement_Controller.Announcement_Controller_C.OnResourceIncreased
	void Do Resource Full(struct FText Name); // Function Announcement_Controller.Announcement_Controller_C.Do Resource Full
	void OnFullHealthCannotHeal(); // Function Announcement_Controller.Announcement_Controller_C.OnFullHealthCannotHeal
	void OnResourceFullStarted(); // Function Announcement_Controller.Announcement_Controller_C.OnResourceFullStarted
	void OnResourceFullFinished(); // Function Announcement_Controller.Announcement_Controller_C.OnResourceFullFinished
	void OnCollectedSkin(struct UItemSkin* Skin, struct UItemID* ItemID); // Function Announcement_Controller.Announcement_Controller_C.OnCollectedSkin
	void OnCollectedVictoryPose_Event_1(struct UVictoryPose* pose, struct UPlayerCharacterID* characterID); // Function Announcement_Controller.Announcement_Controller_C.OnCollectedVictoryPose_Event_1
	void OnCollectedSchematic_Event(struct USchematic* Schematic); // Function Announcement_Controller.Announcement_Controller_C.OnCollectedSchematic_Event
	void OnCollectedPickaxePart_Event_1(struct UPickaxePart* PickaxePart); // Function Announcement_Controller.Announcement_Controller_C.OnCollectedPickaxePart_Event_1
	void OnCollectedVanityItem_Event_1(struct UVanityItem* Item, struct UPlayerCharacterID* characterID); // Function Announcement_Controller.Announcement_Controller_C.OnCollectedVanityItem_Event_1
	void OnCollectedEverything_Event(struct FText InMessage); // Function Announcement_Controller.Announcement_Controller_C.OnCollectedEverything_Event
	void ExecuteUbergraph_Announcement_Controller(int32_t EntryPoint); // Function Announcement_Controller.Announcement_Controller_C.ExecuteUbergraph_Announcement_Controller
};

