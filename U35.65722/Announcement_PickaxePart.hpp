#ifndef UE4SS_SDK_Announcement_PickaxePart_HPP
#define UE4SS_SDK_Announcement_PickaxePart_HPP

class UAnnouncement_PickaxePart_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnnounceAnim;
    class UBorder* InnerBorder;
    class UITM_GeneratedIcon_Item_C* ITM_GeneratedIcon_Item;
    class UBasic_Label_C* NameLabel;
    class UCanvasPanel* Root;
    float StartDelay;
    class UPickaxePart* PickaxePart;
    class UTextureRenderTarget2D* IconRenderTarget;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnAnnounceAnimFinished();
    void ExecuteUbergraph_Announcement_PickaxePart(int32 EntryPoint, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FExecuteUbergraph_Announcement_PickaxePartK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UPickaxePart* K2Node_DynamicCast_AsPickaxe_Part, bool K2Node_DynamicCast_bSuccess_1, FLinearColor CallFunc_MenuColors_OutputColor, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime, EPickaxePartLocation CallFunc_GetPrefferedLocation_ReturnValue);
};

#endif
