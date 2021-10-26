// Enum ActorSequence.EActorSequenceObjectReferenceType
enum class EActorSequenceObjectReferenceType : uint8 {
	ContextActor = 0,
	ExternalActor = 1,
	Component = 2,
	EActorSequenceObjectReferenceType_MAX = 3
};

// ScriptStruct ActorSequence.ActorSequenceObjectReferenceMap
// Size: 0x20 (Inherited: 0x00)
struct FActorSequenceObjectReferenceMap {
	TArray<FGuid> BindingIds; // 0x00(0x10)
	TArray<FActorSequenceObjectReferences> References; // 0x10(0x10)
};

// ScriptStruct ActorSequence.ActorSequenceObjectReferences
// Size: 0x10 (Inherited: 0x00)
struct FActorSequenceObjectReferences {
	TArray<FActorSequenceObjectReference> Array; // 0x00(0x10)
};

// ScriptStruct ActorSequence.ActorSequenceObjectReference
// Size: 0x28 (Inherited: 0x00)
struct FActorSequenceObjectReference {
	enum class EActorSequenceObjectReferenceType Type; // 0x00(0x01)
	FGuid ActorId; // 0x04(0x10)
	FString PathToComponent; // 0x18(0x10)
};

