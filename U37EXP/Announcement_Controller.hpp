#ifndef UE4SS_SDK_Announcement_Controller_HPP
#define UE4SS_SDK_Announcement_Controller_HPP

class UAnnouncement_Controller_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ResourceFull;
    class UTextBlock* ResourceFullLabel;
    class UCanvasPanel* RootPanel;
    class UObject* GoldFrenzyComponent;
    class APlayerCharacter* Character;
    class UPlayerHealthComponent* HealthComponent;
    float NextAnnouncementTime;

    void CreateEverythingCollectedAnnouncement(FText Message);
    void CreateVanityAnnouncement(class UVanityItem* VanityItem, class UPlayerCharacterID* VanityOwner);
    void CreatePickaxeAnnouncement(class UPickaxePart* PickaxePart);
    void CreateSchematicAnnouncement(class USchematic* InSchematic);
    void CreateVPAnnouncement(class UVictoryPose* VictoryPose, class UPlayerCharacterID* VPOwner);
    void QueueWidget(class UUserWidget* InWidget);
    float GetStartDelay();
    void CreateSkinAnnouncement(class UItemSkin* Skin, class UItemID* SkinOwner);
    void CreateValueAnnouncement(float Value, FText Name, FLinearColor Color, int32 FractionalDigits, class UTexture2D* Icon, FLinearColor Icon Tint);
    void CreateTextAnnouncement(FText Text, FLinearColor Color, class UTexture2D* Icon, FLinearColor Icon Tint);
    void Construct();
    void OnHealed(float Amount);
    void OnResourceFull(class UCappedResource* Resource);
    void OnResourceIncreased(class UCappedResource* Resource, float Amount);
    void Do Resource Full(FText Name);
    void OnFullHealthCannotHeal();
    void OnResourceFullStarted();
    void OnResourceFullFinished();
    void OnCollectedSkin(class UItemSkin* Skin, class UItemID* ItemID);
    void OnCollectedVictoryPose_Event_0(class UVictoryPose* pose, class UPlayerCharacterID* characterID);
    void OnCollectedSchematic_Event(class USchematic* Schematic);
    void OnCollectedPickaxePart_Event_0(class UPickaxePart* PickaxePart);
    void OnCollectedVanityItem_Event_0(class UVanityItem* Item, class UPlayerCharacterID* characterID);
    void OnCollectedEverything_Event(FText InMessage);
    void ExecuteUbergraph_Announcement_Controller(int32 EntryPoint);
};

#endif
