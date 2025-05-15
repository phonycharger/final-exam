#pragma once
#include <algorithm>
#include <forward_list>
#include <list>
#include <map>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

#include "SomeObject.hpp"









/***********************************************************************************************************************************
**  Insert operations
***********************************************************************************************************************************/
struct insert_at_back_of_vector
{
  // Function takes a constant SomeObject as a parameter, inserts that object at the back of a vector, and returns nothing.
  void operator()( const SomeObject & object )
  {
    ///////////////////////// TO-DO (1) //////////////////////////////
    my_vector.push_back( object );
    /////////////////////// END-TO-DO (1) ////////////////////////////
  }

  std::vector<SomeObject> & my_vector;                                                                            // extendable vector
};









struct insert_at_back_of_dll
{
  // Function takes a constant SomeObject as a parameter, inserts that object at the back of a doubly linked list, and returns nothing.
  void operator()( const SomeObject & object )
  {
    ///////////////////////// TO-DO (2) //////////////////////////////
    my_dll.push_back( object );
    /////////////////////// END-TO-DO (2) ////////////////////////////
  }

  std::list<SomeObject> & my_dll;                                                                                 // doubly linked list
};









struct insert_at_back_of_sll
{
  // Function takes a constant SomeObject as a parameter, inserts that object at the back of a singly linked list, and returns nothing.
  void operator()( const SomeObject & object )
  {
    ///////////////////////// TO-DO (3) //////////////////////////////
    auto before = my_sll.before_begin();
    for( auto it = my_sll.begin(); it != my_sll.end(); ++before, ++it ) {}
    my_sll.insert_after( before, object );
    /////////////////////// END-TO-DO (3) ////////////////////////////
  }

  std::forward_list<SomeObject> & my_sll;                                                                         // singly linked list
};









struct insert_at_front_of_vector
{
  // Function takes a constant SomeObject as a parameter, inserts that object at the front of a vector, and returns nothing.
  void operator()( const SomeObject & object )
  {
    ///////////////////////// TO-DO (4) //////////////////////////////
    my_vector.insert( my_vector.begin(), object );
    /////////////////////// END-TO-DO (4) ////////////////////////////
  }

  std::vector<SomeObject> & my_vector;                                                                            // extendable vector
};









struct insert_at_front_of_dll
{
  // Function takes a constant SomeObject as a parameter, inserts that object at the front of a doubly linked list, and returns nothing.
  void operator()( const SomeObject & object )
  {
    ///////////////////////// TO-DO (5) //////////////////////////////
    my_dll.push_front( object );
    /////////////////////// END-TO-DO (5) ////////////////////////////
  }

  std::list<SomeObject> & my_dll;                                                                                 // doubly linked list
};









struct insert_at_front_of_sll
{
  // Function takes a constant SomeObject as a parameter, inserts that object at the front of a singly linked list, and returns nothing.
  void operator()( const SomeObject & object )
  {
    ///////////////////////// TO-DO (6) //////////////////////////////
    my_sll.push_front( object );
    /////////////////////// END-TO-DO (6) ////////////////////////////
  }

  std::forward_list<SomeObject> & my_sll;                                                                         // singly linked list
};









struct insert_into_bst
{
  // Function takes a constant SomeObject as a parameter, inserts that object indexed by the object's key into a binary search tree, and
  // returns nothing.
  void operator()( const SomeObject & object )
  {
    ///////////////////////// TO-DO (7) //////////////////////////////
    my_bst.emplace( object.upcCode(), object );
    /////////////////////// END-TO-DO (7) ////////////////////////////
  }

  std::map<std::string, SomeObject> & my_bst;                                                                     // binary search tree
};









struct insert_into_hash_table
{
  // Function takes a constant SomeObject as a parameter, inserts that object indexed by the object's key into a hash table, and returns
  // nothing.
  void operator()( const SomeObject & object )
  {
    ///////////////////////// TO-DO (8) //////////////////////////////
    my_hash_table.emplace( object.upcCode(), object );
    /////////////////////// END-TO-DO (8) ////////////////////////////
  }

  std::unordered_map<std::string, SomeObject> & my_hash_table;                                                    // hash table
};


















/***********************************************************************************************************************************
**  Remove operations
***********************************************************************************************************************************/
struct remove_from_back_of_vector
{
  // Function takes no parameters, removes the object at the back of a vector, and returns nothing.
  void operator()( const auto & )
  {
    ///////////////////////// TO-DO (9) //////////////////////////////
    if( !my_vector.empty() ) my_vector.pop_back();
    /////////////////////// END-TO-DO (9) ////////////////////////////
  }

  std::vector<SomeObject> & my_vector;                                                                            // extendable vector
};









struct remove_from_back_of_dll
{
  // Function takes no parameters, removes the object at the back of a doubly linked list, and returns nothing.
  void operator()( const auto & )
  {
    ///////////////////////// TO-DO (10) //////////////////////////////
    if( !my_dll.empty() ) my_dll.pop_back();
    /////////////////////// END-TO-DO (10) ////////////////////////////
  }

  std::list<SomeObject> & my_dll;                                                                                 // doubly linked list
};









struct remove_from_back_of_sll
{
  // Function takes no parameters, removes the object at the back of a singly linked list, and returns nothing.
  void operator()( const auto & )
  {
    ///////////////////////// TO-DO (11) //////////////////////////////
    if( !my_sll.empty() )
    {
      auto before = my_sll.before_begin();
      for( auto it = my_sll.begin(); std::next( it ) != my_sll.end(); ++before, ++it ) {}
      my_sll.erase_after( before );
    }
    /////////////////////// END-TO-DO (11) ////////////////////////////
  }

  std::forward_list<SomeObject> & my_sll;                                                                         // singly linked list
};









struct remove_from_front_of_vector
{
  // Function takes no parameters, removes the object at the front of a vector, and returns nothing.
  void operator()( const auto & )
  {
    ///////////////////////// TO-DO (12) //////////////////////////////
    if( !my_vector.empty() ) my_vector.erase( my_vector.begin() );
    /////////////////////// END-TO-DO (12) ////////////////////////////
  }

  std::vector<SomeObject> & my_vector;                                                                            // extendable vector
};









struct remove_from_front_of_dll
{
  // Function takes no parameters, removes the object at the front of a doubly linked list, and returns nothing.
  void operator()( const auto & )
  {
    ///////////////////////// TO-DO (13) //////////////////////////////
    if( !my_dll.empty() ) my_dll.pop_front();
    /////////////////////// END-TO-DO (13) ////////////////////////////
  }

  std::list<SomeObject> & my_dll;                                                                                 // doubly linked list
};









struct remove_from_front_of_sll
{
  // Function takes no parameters, removes the object at the front of a singly linked list, and returns nothing.
  void operator()( const auto & )
  {
    ///////////////////////// TO-DO (14) //////////////////////////////
    if( !my_sll.empty() ) my_sll.pop_front();
    /////////////////////// END-TO-DO (14) ////////////////////////////
  }

  std::forward_list<SomeObject> & my_sll;                                                                         // singly linked list
};









struct remove_from_bst
{
  // Function takes a constant SomeObject as a parameter, finds and removes from the binary search tree the object with a matching key, and
  // returns nothing.
  void operator()( const SomeObject & object )
  {
    ///////////////////////// TO-DO (15) //////////////////////////////
    if( !my_bst.empty() ) my_bst.erase( object.upcCode() );
    /////////////////////// END-TO-DO (15) ////////////////////////////
  }

  std::map<std::string, SomeObject> & my_bst;                                                                     // binary search tree
};









struct remove_from_hash_table
{
  // Function takes a constant SomeObject as a parameter, finds and removes from the hash table the object with a matching key, and returns
  // nothing.
  void operator()( const SomeObject & object )
  {
    ///////////////////////// TO-DO (16) //////////////////////////////
    if( !my_hash_table.empty() ) my_hash_table.erase( object.upcCode() );
    /////////////////////// END-TO-DO (16) ////////////////////////////
  }

  std::unordered_map<std::string, SomeObject> & my_hash_table;                                                    // hash table
};















/***********************************************************************************************************************************
**  Search operations
***********************************************************************************************************************************/
struct search_within_vector
{
  // Function takes no parameters, searches a vector for an object with a key matching the target key, and returns a pointer to that found
  // object if such an object is found, nullptr otherwise.
  SomeObject * operator()( const auto & )
  {
    ///////////////////////// TO-DO (17) //////////////////////////////
    for( auto & elem : my_vector )
      if( elem.upcCode() == target_key ) return &elem;
    return nullptr;
    /////////////////////// END-TO-DO (17) ////////////////////////////
  }

  std::vector<SomeObject> & my_vector;                                                                            // extendable vector
  const std::string         target_key;
};









struct search_within_dll
{
  // Function takes no parameters, searches a doubly linked list for an object with a key matching the target key, and returns a pointer to
  // that found object if such an object is found, nullptr otherwise.
  SomeObject * operator()( const auto & )
  {
    ///////////////////////// TO-DO (18) //////////////////////////////
    for( auto & elem : my_dll )
      if( elem.upcCode() == target_key ) return &elem;
    return nullptr;
    /////////////////////// END-TO-DO (18) ////////////////////////////
  }

  std::list<SomeObject> & my_dll;                                                                                 // doubly linked list
  const std::string       target_key;
};









struct search_within_sll
{
  // Function takes no parameters, searches a singly linked list for an object with a key matching the target key, and returns a pointer to
  // that found object if such an object is found, nullptr otherwise.
  SomeObject * operator()( const auto & )
  {
    ///////////////////////// TO-DO (19) //////////////////////////////
    for( auto & elem : my_sll )
      if( elem.upcCode() == target_key ) return &elem;
    return nullptr;
    /////////////////////// END-TO-DO (19) ////////////////////////////
  }

  std::forward_list<SomeObject> & my_sll;                                                                         // singly linked list
  const std::string               target_key;
};









struct search_within_bst
{
  // Function takes no parameters, searches a binary search tree for an object with a key matching the target key, and returns a pointer to
  // that found object if such an object is found, nullptr otherwise.
  SomeObject * operator()( const auto & )
  {
    ///////////////////////// TO-DO (20) //////////////////////////////
    auto it = my_bst.find( target_key );
    return ( it == my_bst.end() ) ? nullptr : &it->second;
    /////////////////////// END-TO-DO (20) ////////////////////////////
  }

  std::map<std::string, SomeObject> & my_bst;                                                                     // binary search tree
  const std::string                   target_key;
};









struct search_within_hash_table
{
  // Function takes no parameters, searches a hash table for an object with a key matching the target key, and returns a pointer to that
  // found object if such an object is found, nullptr otherwise.
  SomeObject * operator()( const auto & )
  {
    ///////////////////////// TO-DO (21) //////////////////////////////
    auto it = my_hash_table.find( target_key );
    return ( it == my_hash_table.end() ) ? nullptr : &it->second;
    /////////////////////// END-TO-DO (21) ////////////////////////////
  }

  std::unordered_map<std::string, SomeObject> & my_hash_table;                                                    // hash table
  const std::string                             target_key;
};
