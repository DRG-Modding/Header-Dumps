#ifndef UE4SS_SDK_Announcement_Controller_HPP
#define UE4SS_SDK_Announcement_Controller_HPP

class UAnnouncement_Controller_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* ResourceFull;
    UTextBlock* ResourceFullLabel;
    UCanvasPanel* RootPanel;
    UObject* GoldFrenzyComponent;
    APlayerCharacter* Character;
    UPlayerHealthComponent* HealthComponent;
    float NextAnnouncementTime;

    void CreateEverythingCollectedAnnouncement(FText Message, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, float CallFunc_GetStartDelay_ReturnValue, UAnnouncement_CollectedEverything_C* CallFunc_Create_ReturnValue);
    void CreateVanityAnnouncement(UVanityItem* VanityItem, UPlayerCharacterID* VanityOwner, float CallFunc_GetStartDelay_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UAnnouncement_Vanity_C* CallFunc_Create_ReturnValue);
    void CreatePickaxeAnnouncement(UPickaxePart* PickaxePart, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UAnnouncement_PickaxePart_C* CallFunc_Create_ReturnValue);
    void CreateSchematicAnnouncement(USchematic* InSchematic, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UAnnouncement_Schematic_C* CallFunc_Create_ReturnValue);
    void CreateVPAnnouncement(UVictoryPose* VictoryPose, UPlayerCharacterID* VPOwner, float CallFunc_GetStartDelay_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UAnnouncement_VictoryPose_C* CallFunc_Create_ReturnValue);
    void QueueWidget(UUserWidget* InWidget, UCanvasPanelSlot* SlotWidget, UUserWidget* Widget, FAnchors K2Node_MakeStruct_Anchors, float CallFunc_GetGameTimeInSeconds_ReturnValue, UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
    float GetStartDelay(float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue);
    void CreateSkinAnnouncement(UItemSkin* Skin, UItemID* SkinOwner, float CallFunc_GetStartDelay_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UAnnouncement_Skin_C* CallFunc_Create_ReturnValue);
    void CreateValueAnnouncement(float Value, FText Name, FLinearColor Color, int32 FractionalDigits, UTexture2D* Icon, FLinearColor Icon Tint, float CallFunc_FMax_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void CreateTextAnnouncement(FText Text, FLinearColor Color, UTexture2D* Icon, FLinearColor Icon Tint, UCanvasPanelSlot* SlotWidget, UAnnouncement_Label_C* Widget, float CallFunc_GetStartDelay_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UAnnouncement_Label_C* CallFunc_Create_ReturnValue);
    void Construct();
    void OnHealed(float Amount);
    void OnResourceFull(UCappedResource* Resource);
    void OnResourceIncreased(UCappedResource* Resource, float Amount);
    void Do Resource Full(FText Name);
    void OnFullHealthCannotHeal();
    void OnResourceFullStarted();
    void OnResourceFullFinished();
    void OnCollectedSkin(UItemSkin* Skin, UItemID* ItemID);
    void OnCollectedVictoryPose_Event_0(UVictoryPose* pose, UPlayerCharacterID* characterID);
    void OnCollectedSchematic_Event(USchematic* Schematic);
    void OnCollectedPickaxePart_Event_0(UPickaxePart* PickaxePart);
    void OnCollectedVanityItem_Event_0(UVanityItem* Item, UPlayerCharacterID* characterID);
    void OnCollectedEverything_Event(FText InMessage);
    void ExecuteUbergraph_Announcement_Controller(int32 EntryPoint, DamageSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FullHealthSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, SkinEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, CollectedVictoryPoseEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, SchematicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, CollectedPickaxePartDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, CollectedVanityItemDeledate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, CollectedEverythingEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, float K2Node_CustomEvent_Amount_1, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, UPlayerResourceComponent* CallFunc_GetFromPlayer_ReturnValue, UCappedResource* K2Node_CustomEvent_Resource_1, FText CallFunc_GetTitle_ReturnValue, UPlayerResourceComponent* CallFunc_GetFromPlayer_ReturnValue_1, UCappedResource* K2Node_CustomEvent_Resource, float K2Node_CustomEvent_Amount, FText K2Node_CustomEvent_Name, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FColor CallFunc_GetColor_ReturnValue, FLinearColor CallFunc_Conv_ColorToLinearColor_ReturnValue, int32 K2Node_Select_Default, FText CallFunc_GetTitle_ReturnValue_1, FText CallFunc_MakeLiteralText_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue_1, ResourceAddedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_10, ResourceFullSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_11, UItemSkin* K2Node_CustomEvent_Skin, UItemID* K2Node_CustomEvent_itemID, UVictoryPose* K2Node_CustomEvent_pose, UPlayerCharacterID* K2Node_CustomEvent_characterID_1, USchematic* K2Node_CustomEvent_Schematic, UPickaxePart* K2Node_CustomEvent_pickaxepart, UVanityItem* K2Node_CustomEvent_Item, UPlayerCharacterID* K2Node_CustomEvent_characterID, FText K2Node_CustomEvent_InMessage, FText CallFunc_MakeLiteralText_ReturnValue_2, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
}

#endif
