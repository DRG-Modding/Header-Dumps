#ifndef UE4SS_SDK_ITM_ClassLevelRequirement_HPP
#define UE4SS_SDK_ITM_ClassLevelRequirement_HPP

class UITM_ClassLevelRequirement_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFSDLabelWidget* DATA_Class;
    class UITM_JobsEntry_Resource_C* ITM_JobsEntry_Resource;
    class UPlayerCharacterID* Character;
    int32 RequiredLevel;

    void Construct();
    void ExecuteUbergraph_ITM_ClassLevelRequirement(int32 EntryPoint);
};

#endif
