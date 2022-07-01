#ifndef UE4SS_SDK_ITM_TreeOfVanityEditor_NodeIcon_HPP
#define UE4SS_SDK_ITM_TreeOfVanityEditor_NodeIcon_HPP

class UITM_TreeOfVanityEditor_NodeIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_ClassIcon;
    class UImage* Image_Cursor;
    class UImage* Image_Move;
    class UImage* Image_Move_1;
    class UOverlay* Overlay_Move;
    class USizeBox* SizeBox_0;
    class UTextBlock* TextBlock_Connect;
    class UTextBlock* TextBlock_Disconnect;
    class UTextBlock* TextBlock_Minus;
    class UTextBlock* TextBlock_plus;
    class UTextBlock* TextBlock_Swap;
    class UWidgetSwitcher* WidgetSwitcher_PlusMinus;
    TEnumAsByte<ENUM_TreeOfVanityEditor_State::Type> ShowPlus;
    class UITM_TreeOfVanity_Node_C* CopyNode;
    class UMaterialInstanceDynamic* DynMat;

    void PreConstruct(bool IsDesignTime);
    void SetMovingNode(class UITM_TreeOfVanity_Node_C* Node);
    void SetAlpha(float Opacity);
    void ExecuteUbergraph_ITM_TreeOfVanityEditor_NodeIcon(int32 EntryPoint);
};

#endif
