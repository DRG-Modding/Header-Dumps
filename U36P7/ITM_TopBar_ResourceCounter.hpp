#ifndef UE4SS_SDK_ITM_TopBar_ResourceCounter_HPP
#define UE4SS_SDK_ITM_TopBar_ResourceCounter_HPP

class UITM_TopBar_ResourceCounter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_AnimatedNumber_C* Number;
    class UBasic_ResourceIcon_C* ResourceLeft;
    class UBasic_ResourceIcon_C* ResourceRight;
    class UResourceData* Resource;
    float Amount;
    float RequiredAmount;
    bool IconOnRight;
    bool HideWhenZero;
    class UBasic_ToolTip_C* ToolTip;
    bool DoCountAnim;

    void SetResourceData(class UResourceData* InResource, float InAmount, float InRequiredAmount);
    void PreConstruct(bool IsDesignTime);
    void UpdateAmount(float InAmount);
    void Construct();
    void OnResourceAmountChanged_Event(class UResourceData* Resource, float currentAmount);
    void UpdateFromSave();
    void UpdateResourceBehavior(bool HideWhenZero, bool DoCountAnim);
    void ExecuteUbergraph_ITM_TopBar_ResourceCounter(int32 EntryPoint);
};

#endif
