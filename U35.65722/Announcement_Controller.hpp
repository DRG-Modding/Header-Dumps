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

    void CreateEverythingCollectedAnnouncement(FText Message, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, float CallFunc_GetStartDelay_ReturnValue, class UAnnouncement_CollectedEverything_C* CallFunc_Create_ReturnValue);
    void CreateVanityAnnouncement(class UVanityItem* VanityItem, class UPlayerCharacterID* VanityOwner, float CallFunc_GetStartDelay_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAnnouncement_Vanity_C* CallFunc_Create_ReturnValue);
    void CreatePickaxeAnnouncement(class UPickaxePart* PickaxePart, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAnnouncement_PickaxePart_C* CallFunc_Create_ReturnValue);
    void CreateSchematicAnnouncement(class USchematic* InSchematic, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAnnouncement_Schematic_C* CallFunc_Create_ReturnValue);
    void CreateVPAnnouncement(class UVictoryPose* VictoryPose, class UPlayerCharacterID* VPOwner, float CallFunc_GetStartDelay_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAnnouncement_VictoryPose_C* CallFunc_Create_ReturnValue);
    void QueueWidget(class UUserWidget* InWidget, class UCanvasPanelSlot* SlotWidget, class UUserWidget* Widget, FAnchors K2Node_MakeStruct_Anchors, float CallFunc_GetGameTimeInSeconds_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
    float GetStartDelay(float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue);
    void CreateSkinAnnouncement(class UItemSkin* Skin, class UItemID* SkinOwner, float CallFunc_GetStartDelay_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAnnouncement_Skin_C* CallFunc_Create_ReturnValue);
    void CreateValueAnnouncement(float Value, FText Name, FLinearColor Color, int32 FractionalDigits, class UTexture2D* Icon, FLinearColor Icon Tint, float CallFunc_FMax_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void CreateTextAnnouncement(FText Text, FLinearColor Color, class UTexture2D* Icon, FLinearColor Icon Tint, class UCanvasPanelSlot* SlotWidget, class UAnnouncement_Label_C* Widget, float CallFunc_GetStartDelay_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAnnouncement_Label_C* CallFunc_Create_ReturnValue);
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
    void ExecuteUbergraph_Announcement_Controller(int32 EntryPoint, FExecuteUbergraph_Announcement_ControllerK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_Announcement_ControllerK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, FExecuteUbergraph_Announcement_ControllerK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FExecuteUbergraph_Announcement_ControllerK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, FExecuteUbergraph_Announcement_ControllerK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, FExecuteUbergraph_Announcement_ControllerK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5, FExecuteUbergraph_Announcement_ControllerK2Node_CreateDelegate_OutputDelegate_6 K2Node_CreateDelegate_OutputDelegate_6, FExecuteUbergraph_Announcement_ControllerK2Node_CreateDelegate_OutputDelegate_7 K2Node_CreateDelegate_OutputDelegate_7, FExecuteUbergraph_Announcement_ControllerK2Node_CreateDelegate_OutputDelegate_8 K2Node_CreateDelegate_OutputDelegate_8, FExecuteUbergraph_Announcement_ControllerK2Node_CreateDelegate_OutputDelegate_9 K2Node_CreateDelegate_OutputDelegate_9, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, float K2Node_CustomEvent_Amount_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class UPlayerResourceComponent* CallFunc_GetFromPlayer_ReturnValue, class UCappedResource* K2Node_CustomEvent_resource_1, FText CallFunc_GetTitle_ReturnValue, class UPlayerResourceComponent* CallFunc_GetFromPlayer_ReturnValue_1, class UCappedResource* K2Node_CustomEvent_resource, float K2Node_CustomEvent_Amount, FText K2Node_CustomEvent_Name, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FColor CallFunc_GetColor_ReturnValue, FLinearColor CallFunc_Conv_ColorToLinearColor_ReturnValue, int32 K2Node_Select_Default, FText CallFunc_GetTitle_ReturnValue_1, FText CallFunc_MakeLiteralText_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue_1, FExecuteUbergraph_Announcement_ControllerK2Node_CreateDelegate_OutputDelegate_10 K2Node_CreateDelegate_OutputDelegate_10, FExecuteUbergraph_Announcement_ControllerK2Node_CreateDelegate_OutputDelegate_11 K2Node_CreateDelegate_OutputDelegate_11, class UItemSkin* K2Node_CustomEvent_Skin, class UItemID* K2Node_CustomEvent_itemID, class UVictoryPose* K2Node_CustomEvent_pose, class UPlayerCharacterID* K2Node_CustomEvent_characterID_1, class USchematic* K2Node_CustomEvent_Schematic, class UPickaxePart* K2Node_CustomEvent_pickaxepart, class UVanityItem* K2Node_CustomEvent_Item, class UPlayerCharacterID* K2Node_CustomEvent_characterID, FText K2Node_CustomEvent_InMessage, FText CallFunc_MakeLiteralText_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
};

#endif
