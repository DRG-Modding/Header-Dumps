#ifndef UE4SS_SDK_Announcement_PickaxePart_HPP
#define UE4SS_SDK_Announcement_PickaxePart_HPP

class UAnnouncement_PickaxePart_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnnounceAnim;
    UBorder* InnerBorder;
    UITM_GeneratedIcon_Item_C* ITM_GeneratedIcon_Item;
    UBasic_Label_C* NameLabel;
    UCanvasPanel* Root;
    float StartDelay;
    UPickaxePart* PickaxePart;
    UTextureRenderTarget2D* IconRenderTarget;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnAnnounceAnimFinished();
    void ExecuteUbergraph_Announcement_PickaxePart(int32 EntryPoint, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UObject* CallFunc_LoadAsset_Blocking_ReturnValue, UPickaxePart* K2Node_DynamicCast_AsPickaxe_Part, bool K2Node_DynamicCast_bSuccess_1, FLinearColor CallFunc_MenuColors_OutputColor, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime, EPickaxePartLocation CallFunc_GetPrefferedLocation_ReturnValue);
}

#endif
