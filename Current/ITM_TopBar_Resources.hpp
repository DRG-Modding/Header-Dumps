#ifndef UE4SS_SDK_ITM_TopBar_Resources_HPP
#define UE4SS_SDK_ITM_TopBar_Resources_HPP

class UITM_TopBar_Resources_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* ParentBox;
    TArray<class UResourceData*> Resources;
    TMap<class UResourceData*, class UITM_TopBar_ResourceCounter_C*> ResourceWidgets;
    bool IsDesignTime;
    bool HideWhenZero;
    bool DoCountAnim;

    void GetResourceAmount(class UResourceData* Resource, float& Amount);
    void AddResource(class UResourceData* InResource, bool InHideWhenZero);
    void SetResources(TArray<class UResourceData*>& InResources);
    void PreConstruct(bool IsDesignTime);
    void UpdateResourceBehavior(bool HideWhenZero, bool DoCountAnim);
    void ExecuteUbergraph_ITM_TopBar_Resources(int32 EntryPoint);
};

#endif
