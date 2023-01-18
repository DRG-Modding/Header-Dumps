#ifndef UE4SS_SDK_UI_LockOn_Counter_HPP
#define UE4SS_SDK_UI_LockOn_Counter_HPP

class UUI_LockOn_Counter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* RowBoxV;
    int32 MaxTargets;
    TArray<class UUI_LockOn_Counter_Entry_C*> TargetCounters;
    class ALockOnWeapon* Item;
    int32 CurrentTargets;
    FMargin InnerPadding;

    void SetCurrentTargets(int32 InCount);
    void SetMaxTargets(int32 Count);
    void SetupTargetCounter(bool WasCreated, class UUserWidget* Widget, int32 ActiveIndex);
    void PreConstruct(bool IsDesignTime);
    void SetItem(class ALockOnWeapon* InItem);
    void OnLockOnCountChanged(int32 InCurrentCount);
    void ExecuteUbergraph_UI_LockOn_Counter(int32 EntryPoint);
};

#endif
